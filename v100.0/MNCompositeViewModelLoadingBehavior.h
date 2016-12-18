/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCompositeViewModelLoading, MNViewModelUpdateBackfeeding;
@class NSString, NSArray;

@interface MNCompositeViewModelLoadingBehavior : NSObject {

	NSString* _kind;
	long long _importance;
	id<MNCompositeViewModelLoading> _loader;
	id<MNViewModelUpdateBackfeeding> _backfeeder;
	NSArray* _childBehaviors;

}

@property (nonatomic,copy,readonly) NSString * kind;                                     //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) long long importance;                                     //@synthesize importance=_importance - In the implementation block
@property (nonatomic,readonly) id<MNCompositeViewModelLoading> loader;                   //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) id<MNViewModelUpdateBackfeeding> backfeeder;              //@synthesize backfeeder=_backfeeder - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childBehaviors;                            //@synthesize childBehaviors=_childBehaviors - In the implementation block
-(id)initWithKind:(id)arg1 importance:(long long)arg2 loader:(id)arg3 backfeeder:(id)arg4 childBehaviors:(id)arg5 ;
-(id<MNViewModelUpdateBackfeeding>)backfeeder;
-(NSString *)kind;
-(NSArray *)childBehaviors;
-(long long)importance;
-(id<MNCompositeViewModelLoading>)loader;
@end
