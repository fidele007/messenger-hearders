/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBKVOController, NSString;

@interface _FBKVOInfo : NSObject {

	FBKVOController* _controller;
	NSString* _keyPath;
	unsigned long long _options;
	SEL _action;
	void* _context;
	/*^block*/id _block;
	unsigned char _state;

}
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 action:(SEL)arg5 context:(void*)arg6 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(id)initWithController:(id)arg1 keyPath:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
@end

