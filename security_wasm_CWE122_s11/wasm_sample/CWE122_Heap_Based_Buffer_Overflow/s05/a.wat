(module
  (type (;0;) (func (param i32) (result i32)))
  (type (;1;) (func (param i32)))
  (type (;2;) (func (param i32 i32) (result i32)))
  (type (;3;) (func))
  (import "env" "malloc" (func (;0;) (type 0)))
  (import "env" "free" (func (;1;) (type 1)))
  (import "env" "printf" (func (;2;) (type 2)))
  (func (;3;) (type 3)
    (local i32)
    global.get 0
    i32.const 16
    i32.sub
    local.tee 0
    global.set 0
    local.get 0
    i32.const 0
    i32.store offset=12
    local.get 0
    i32.const 10
    call 0
    i32.store offset=12
    local.get 0
    local.get 0
    i32.load offset=12
    i32.store offset=8
    local.get 0
    i32.load offset=8
    call 4
    local.get 0
    i32.const 16
    i32.add
    global.set 0)
  (func (;4;) (type 1) (param i32)
    (local i32 i32)
    global.get 0
    i32.const 48
    i32.sub
    local.tee 1
    global.set 0
    local.get 1
    local.get 0
    i32.store offset=44
    local.get 1
    local.get 1
    i32.load offset=44
    i32.store offset=40
    local.get 1
    i32.const 32
    i32.add
    i64.const 0
    i64.store
    local.get 1
    i32.const 24
    i32.add
    i64.const 0
    i64.store
    local.get 1
    i32.const 16
    i32.add
    i64.const 0
    i64.store
    local.get 1
    i64.const 0
    i64.store offset=8
    local.get 1
    i64.const 0
    i64.store
    local.get 1
    i32.load offset=40
    local.tee 0
    local.get 1
    local.tee 2
    i64.load align=4
    i64.store align=4
    local.get 0
    i32.const 32
    i32.add
    local.get 2
    i32.const 32
    i32.add
    i64.load align=4
    i64.store align=4
    local.get 0
    i32.const 24
    i32.add
    local.get 2
    i32.const 24
    i32.add
    i64.load align=4
    i64.store align=4
    local.get 0
    i32.const 16
    i32.add
    local.get 2
    i32.const 16
    i32.add
    i64.load align=4
    i64.store align=4
    local.get 0
    i32.const 8
    i32.add
    local.get 2
    i32.const 8
    i32.add
    i64.load align=4
    i64.store align=4
    local.get 1
    i32.load offset=40
    i32.load
    call 7
    local.get 1
    i32.load offset=40
    call 1
    local.get 1
    i32.const 48
    i32.add
    global.set 0)
  (func (;5;) (type 2) (param i32 i32) (result i32)
    (local i32)
    global.get 0
    i32.const 16
    i32.sub
    local.tee 2
    global.set 0
    local.get 2
    i32.const 0
    i32.store offset=12
    local.get 2
    local.get 0
    i32.store offset=8
    local.get 2
    local.get 1
    i32.store offset=4
    i32.const 1024
    call 6
    call 3
    i32.const 1041
    call 6
    local.get 2
    i32.const 16
    i32.add
    global.set 0
    i32.const 0)
  (func (;6;) (type 1) (param i32)
    (local i32)
    global.get 0
    i32.const 16
    i32.sub
    local.tee 1
    global.set 0
    local.get 1
    local.get 0
    i32.store offset=12
    block  ;; label = @1
      local.get 1
      i32.load offset=12
      i32.const 0
      i32.ne
      i32.const 1
      i32.and
      i32.eqz
      br_if 0 (;@1;)
      local.get 1
      local.get 1
      i32.load offset=12
      i32.store
      i32.const 1056
      local.get 1
      call 2
      drop
    end
    local.get 1
    i32.const 16
    i32.add
    global.set 0)
  (func (;7;) (type 1) (param i32)
    (local i32)
    global.get 0
    i32.const 16
    i32.sub
    local.tee 1
    global.set 0
    local.get 1
    local.get 0
    i32.store offset=12
    local.get 1
    local.get 1
    i32.load offset=12
    i32.store
    i32.const 1060
    local.get 1
    call 2
    drop
    local.get 1
    i32.const 16
    i32.add
    global.set 0)
  (memory (;0;) 1)
  (global (;0;) (mut i32) (i32.const 5168))
  (global (;1;) i32 (i32.const 1064))
  (global (;2;) i32 (i32.const 5168))
  (export "memory" (memory 0))
  (export "__main_argc_argv" (func 5))
  (export "__data_end" (global 1))
  (export "__heap_base" (global 2))
  (data (;0;) (i32.const 1024) "Calling bad()...\00Finished bad()\00%s\0a\00%d\0a\00"))
