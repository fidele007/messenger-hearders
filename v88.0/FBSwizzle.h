/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSwizzle : NSObject {

	Class cls;
	SEL selector;
	SEL mangledSelector;
	/*function pointer*/void* originalIMP;
	/*function pointer*/void* swizzleIMP;
	unsigned long long ID;
	BOOL instance;

}
-(id)initWithClass:(Class)arg1 selector:(SEL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
