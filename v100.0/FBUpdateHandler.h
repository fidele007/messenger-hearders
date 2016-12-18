/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUpdateHandlerDelegate;
@interface FBUpdateHandler : NSObject {

	id<FBUpdateHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBUpdateHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)deviceStateRequirementsForUpdate:(id)arg1 ;
-(void)processUpdate:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBUpdateHandlerDelegate>)arg1 ;
-(id<FBUpdateHandlerDelegate>)delegate;
-(id)update;
@end

