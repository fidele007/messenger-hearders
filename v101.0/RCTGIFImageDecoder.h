/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/RCTImageDataDecoder.h>

@class NSString, RCTBridge;

@interface RCTGIFImageDecoder : NSObject <RCTImageDataDecoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(BOOL)canDecodeImageData:(id)arg1 ;
-(/*^block*/id)decodeImageData:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 completionHandler:(/*^block*/id)arg5 ;
@end
