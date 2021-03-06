/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class FBListComponent;

@interface FBListComponentController : NSObject {

	BOOL _hasLoaded;
	FBListComponent* _component;
	id<NSObject> _componentControllerContext;

}

@property (__weak) id<NSObject> componentControllerContext;                     //@synthesize componentControllerContext=_componentControllerContext - In the implementation block
@property (nonatomic,__weak,readonly) FBListComponent * component;              //@synthesize component=_component - In the implementation block
-(id<NSObject>)componentControllerContext;
-(void)componentWillDisappear;
-(void)componentDidAppear;
-(void)didAttachComponent;
-(void)didUnattachComponent;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didRequestPrefetchingData;
-(void)componentWillAppear;
-(void)componentDidDisappear;
-(void)willAttachComponent:(id)arg1 ;
-(void)setComponentControllerContext:(id<NSObject>)arg1 ;
-(FBListComponent *)component;
-(void)didLoad;
@end

