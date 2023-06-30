package com.testinglibrary;

import com.facebook.react.bridge.ReactApplicationContext;

abstract class TestingLibrarySpec extends NativeTestingLibrarySpec {
  TestingLibrarySpec(ReactApplicationContext context) {
    super(context);
  }
}
