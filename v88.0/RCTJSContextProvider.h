/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSThread, JSContext;

@interface RCTJSContextProvider : NSObject {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	BOOL _useCustomJSCLibrary;
	NSThread* _javaScriptThread;
	JSContext* _context;
	RCTJSCWrapper* _jscWrapper;

}
-(id)initWithUseCustomJSCLibrary:(BOOL)arg1 ;
-(RCTJSContextData*)data;
-(void)_createContext;
@end

