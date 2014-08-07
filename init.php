<?php
passthru('rm -rf www');
passthru('drush make test_dev/build.make www');
