/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBUpdateHandler.h>

@protocol FBURLHandlerDelegate;
@interface FBURLHandler : FBUpdateHandler {

	id<FBURLHandlerDelegate> _installDelegate;

}

@property (assign,nonatomic,__weak) id<FBURLHandlerDelegate> installDelegate;              //@synthesize installDelegate=_installDelegate - In the implementation block
+(void)setDefaultUrl:(id)arg1 ;
-(void)setInstallDelegate:(id<FBURLHandlerDelegate>)arg1 ;
-(id)initWithUrl:(id)arg1 ;
-(id<FBURLHandlerDelegate>)installDelegate;
-(void)processUpdate:(id)arg1 ;
-(void)cancel;
-(id)init;
@end
