/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
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

