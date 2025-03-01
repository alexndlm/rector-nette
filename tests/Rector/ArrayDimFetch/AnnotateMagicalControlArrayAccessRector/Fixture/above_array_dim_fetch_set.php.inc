<?php

namespace Rector\Nette\Tests\Rector\ArrayDimFetch\AnnotateMagicalControlArrayAccessRector\Fixture;

use Nette\Application\UI\Presenter;
use Rector\Nette\Tests\Rector\ArrayDimFetch\AnnotateMagicalControlArrayAccessRector\Source\SomeControl;

final class AboveArrayDimFetchSet extends Presenter
{
    public function go()
    {
        $someControl = new SomeControl();
        $this['super_name'] = $someControl;

        if ($this['super_name']->callThis()) {
        }
    }
}

?>
-----
<?php

namespace Rector\Nette\Tests\Rector\ArrayDimFetch\AnnotateMagicalControlArrayAccessRector\Fixture;

use Nette\Application\UI\Presenter;
use Rector\Nette\Tests\Rector\ArrayDimFetch\AnnotateMagicalControlArrayAccessRector\Source\SomeControl;

final class AboveArrayDimFetchSet extends Presenter
{
    public function go()
    {
        $someControl = new SomeControl();
        $this['super_name'] = $someControl;
        /** @var \Rector\Nette\Tests\Rector\ArrayDimFetch\AnnotateMagicalControlArrayAccessRector\Source\SomeControl $superNameControl */
        $superNameControl = $this['super_name'];

        if ($superNameControl->callThis()) {
        }
    }
}

?>
