/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, NSIndexPath;

@interface FBMobileConfigSearchResultItem : NSObject {

	NSString* _searchResultName;
	NSIndexPath* _indexPath;
	const FBMobileConfigQEExperimentInfo* _experiment;
	FBMobileConfigQEUniverseInfo* _universe;
	long long _type;

}

@property (nonatomic,copy,readonly) NSString * searchResultName;                              //@synthesize searchResultName=_searchResultName - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                       //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) const FBMobileConfigQEExperimentInfo* experiment;              //@synthesize experiment=_experiment - In the implementation block
@property (nonatomic,readonly) FBMobileConfigQEUniverseInfo* universe;                        //@synthesize universe=_universe - In the implementation block
@property (assign,nonatomic) long long type;                                                  //@synthesize type=_type - In the implementation block
+(id)createSearchResultItemWithName:(id)arg1 indexPath:(id)arg2 isGatekeeper:(BOOL)arg3 ;
+(id)createSearchResultItemWithName:(id)arg1 universe:(FBMobileConfigQEUniverseInfo*)arg2 ;
+(id)createSearchResultItemWithName:(id)arg1 experiment:(const FBMobileConfigQEExperimentInfo*)arg2 universe:(FBMobileConfigQEUniverseInfo*)arg3 ;
-(const FBMobileConfigQEExperimentInfo*)experiment;
-(FBMobileConfigQEUniverseInfo*)universe;
-(NSString *)searchResultName;
-(id)initWithSearchResultName:(id)arg1 indexPath:(id)arg2 isGatekeeper:(BOOL)arg3 ;
-(id)initWithSearchResultName:(id)arg1 experiment:(const FBMobileConfigQEExperimentInfo*)arg2 universe:(FBMobileConfigQEUniverseInfo*)arg3 ;
-(id)initWithSearchResultName:(id)arg1 universe:(FBMobileConfigQEUniverseInfo*)arg2 ;
-(NSIndexPath *)indexPath;
-(void)setType:(long long)arg1 ;
-(long long)type;
@end

