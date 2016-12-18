/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBModalWebFlow <NSObject>
@property (assign,nonatomic) BOOL isModalFlow; 
@property (nonatomic,copy) NSString * modalCancelButtonTitle; 
@property (assign,nonatomic) BOOL disableDismissModalFlowAutomatically; 
@property (assign,nonatomic,__weak) id<FBModalWebFlowDelegate> modalFlowDelegate; 
@required
-(void)setIsModalFlow:(BOOL)arg1;
-(void)setDisableDismissModalFlowAutomatically:(BOOL)arg1;
-(void)setModalFlowDelegate:(id)arg1;
-(BOOL)isModalFlow;
-(NSString *)modalCancelButtonTitle;
-(void)setModalCancelButtonTitle:(id)arg1;
-(BOOL)disableDismissModalFlowAutomatically;
-(id<FBModalWebFlowDelegate>)modalFlowDelegate;

@end

