/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexPath;

@interface FBSettingsSearchResultAction : NSObject {

	NSString* _searchResultName;
	NSString* _searchResultKey;
	NSIndexPath* _atIndexPath;
	unsigned long long _actionType;
	FBSettingsSearchResultAction* _nextSearchResultAction;

}

@property (nonatomic,retain) FBSettingsSearchResultAction * nextSearchResultAction;              //@synthesize nextSearchResultAction=_nextSearchResultAction - In the implementation block
@property (nonatomic,readonly) NSString * searchResultName;                                      //@synthesize searchResultName=_searchResultName - In the implementation block
@property (nonatomic,readonly) NSString * searchResultKey;                                       //@synthesize searchResultKey=_searchResultKey - In the implementation block
@property (nonatomic,readonly) NSIndexPath * atIndexPath;                                        //@synthesize atIndexPath=_atIndexPath - In the implementation block
@property (nonatomic,readonly) unsigned long long actionType;                                    //@synthesize actionType=_actionType - In the implementation block
+(id)createFromParentSearchResultAction:(id)arg1 searchResultActionName:(id)arg2 key:(id)arg3 indexPath:(id)arg4 actionType:(unsigned long long)arg5 ;
+(id)createSearchResultActionName:(id)arg1 key:(id)arg2 indexPaths:(id)arg3 actionType:(unsigned long long)arg4 ;
-(NSString *)searchResultName;
-(FBSettingsSearchResultAction *)nextSearchResultAction;
-(NSIndexPath *)atIndexPath;
-(NSString *)searchResultKey;
-(id)initWithSearchResultName:(id)arg1 key:(id)arg2 indexPath:(id)arg3 actionType:(unsigned long long)arg4 ;
-(void)setNextSearchResultAction:(FBSettingsSearchResultAction *)arg1 ;
-(id)allAtIndexPaths;
-(id)actionTypeString;
-(id)debugDescription;
-(unsigned long long)actionType;
@end

