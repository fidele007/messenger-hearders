/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMemPageCardControllerDelegate;
@class FBMemPage, FBUserSession, NSString, FBScenePath, FBFeedToolbox, UITableView;

@interface FBMemPageCardController : NSObject {

	FBMemPage* _page;
	FBUserSession* _userSession;
	NSString* _actionSource;
	FBScenePath* _scenePath;
	NSString* _analyticsUUID;
	id<FBMemPageCardControllerDelegate> _delegate;
	NSString* _sourceID;
	FBFeedToolbox* _toolbox;
	UITableView* _timelineHeaderTableView;

}

@property (nonatomic,copy) NSString * analyticsUUID;                                           //@synthesize analyticsUUID=_analyticsUUID - In the implementation block
@property (nonatomic,copy) NSString * sourceID;                                                //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,readonly) FBMemPage * page;                                               //@synthesize page=_page - In the implementation block
@property (assign,nonatomic,__weak) id<FBMemPageCardControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBUserSession * userSession;                                    //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) NSString * actionSource;                                        //@synthesize actionSource=_actionSource - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                        //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                        //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,__weak,readonly) UITableView * timelineHeaderTableView;                   //@synthesize timelineHeaderTableView=_timelineHeaderTableView - In the implementation block
-(NSString *)analyticsUUID;
-(FBScenePath *)scenePath;
-(FBFeedToolbox *)toolbox;
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 actionSource:(id)arg5 sourceID:(id)arg6 toolbox:(id)arg7 scenePath:(id)arg8 ;
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 actionSource:(id)arg5 sourceID:(id)arg6 toolbox:(id)arg7 scenePath:(id)arg8 timelineHeaderTableView:(id)arg9 ;
-(void)setAnalyticsUUID:(NSString *)arg1 ;
-(NSString *)actionSource;
-(UITableView *)timelineHeaderTableView;
-(void)configureWithPage:(id)arg1 ;
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 ;
-(BOOL)showBorder;
-(void)logPageActionWithEventName:(id)arg1 extra:(id)arg2 ;
-(id)backgroundColor;
-(void)setDelegate:(id<FBMemPageCardControllerDelegate>)arg1 ;
-(id<FBMemPageCardControllerDelegate>)delegate;
-(FBMemPage *)page;
-(id)cardView;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(FBUserSession *)userSession;
@end
