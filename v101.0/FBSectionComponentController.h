/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSectionComponent;

@interface FBSectionComponentController : NSObject {

	BOOL _hasLoaded;
	FBSectionComponent* _component;

}

@property (nonatomic,__weak,readonly) FBSectionComponent * component;              //@synthesize component=_component - In the implementation block
-(void)didRequestPrefetchingData;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didRequestReload;
-(void)didPullToRefresh;
-(void)componentWillAppear;
-(void)componentDidAppear;
-(void)componentWillDisappear;
-(void)componentDidDisappear;
-(void)didChangeComponentWithPreviousComponent:(id)arg1 userInfoFromStateUpdate:(id)arg2 ;
-(void)didAttachComponent;
-(void)didUnattachComponent;
-(void)willAttachComponent:(id)arg1 ;
-(FBSectionComponent *)component;
-(void)didLoad;
@end
