<?php

declare(strict_types=1);

use Rector\Config\RectorConfig;
use Rector\Nette\Rector\FuncCall\JsonDecodeEncodeToNetteUtilsJsonDecodeEncodeRector;

return static function (RectorConfig $rectorConfig): void {
    $rectorConfig->import(__DIR__ . '/../../../../../config/config.php');
    $services = $rectorConfig->services();

    $services->set(JsonDecodeEncodeToNetteUtilsJsonDecodeEncodeRector::class);
};
