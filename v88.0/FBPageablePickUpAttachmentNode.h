/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPickUpAttachmentNode.h>
#import <Messenger/FBPageableItem.h>

@class NSString;

@interface FBPageablePickUpAttachmentNode : FBPickUpAttachmentNode <FBPageableItem> {

	BOOL _snappedOpenForPaging;
	BOOL _activePageInPagingNode;
	BOOL _wasActivePageInPagingNodeBeforeClosing;
	long long _initialPagingOrientation;

}

@property (assign,nonatomic) long long initialPagingOrientation;                       //@synthesize initialPagingOrientation=_initialPagingOrientation - In the implementation block
@property (assign,nonatomic) BOOL snappedOpenForPaging;                                //@synthesize snappedOpenForPaging=_snappedOpenForPaging - In the implementation block
@property (assign,nonatomic) BOOL activePageInPagingNode;                              //@synthesize activePageInPagingNode=_activePageInPagingNode - In the implementation block
@property (assign,nonatomic) BOOL wasActivePageInPagingNodeBeforeClosing;              //@synthesize wasActivePageInPagingNodeBeforeClosing=_wasActivePageInPagingNodeBeforeClosing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL supportsOrientationRotation; 
-(void)_staticInitialize;
-(void)prepareForPagingInContext:(unsigned long long)arg1 inOrientation:(long long)arg2 withPagingGestureRecognizer:(id)arg3 ;
-(void)cleanUpAfterPaging;
-(void)didBeginMoving;
-(void)maySettleAsActivePage;
-(void)didSettleAsActivePage;
-(void)didSettleAsInactivePage;
-(void)didEnterPagingRange;
-(void)didExitPagingRange;
-(BOOL)wasActivePageInPagingNodeBeforeClosing;
-(void)mayClose;
-(BOOL)orientationState:(id)arg1 shouldUpdateStatusBarToInterfaceOrientation:(long long)arg2 ;
-(long long)initialOpenedOrientation;
-(long long)initialPagingOrientation;
-(void)setInitialPagingOrientation:(long long)arg1 ;
-(BOOL)snappedOpenForPaging;
-(void)setSnappedOpenForPaging:(BOOL)arg1 ;
-(BOOL)activePageInPagingNode;
-(void)setActivePageInPagingNode:(BOOL)arg1 ;
-(void)setWasActivePageInPagingNodeBeforeClosing:(BOOL)arg1 ;
-(id)init;
@end

