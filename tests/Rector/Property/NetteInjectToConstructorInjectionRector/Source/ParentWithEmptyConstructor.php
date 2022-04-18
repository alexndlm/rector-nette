<?php

namespace Rector\Nette\Tests\Rector\Property\NetteInjectToConstructorInjectionRector\Source;

abstract class ParentWithEmptyConstructor
{
    private int $value;

    public function __construct()
    {
        $this->value = 100;
    }
}
