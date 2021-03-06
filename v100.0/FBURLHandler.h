/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
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

