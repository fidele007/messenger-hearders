/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchBaseAppSpecificConfigProtocol, FBSearchStyleConfig;
#import <Messenger/Messenger-Structs.h>
@class FBUserSession, FBScopedSearchPageSearchConfig;

@interface FBSearchConfig : NSObject {

	FBUserSession* _session;
	unsigned long long _searchMode;
	FBScopedSearchPageSearchConfig* _scopedSearchPageSearchConfig;
	id<FBSearchBaseAppSpecificConfigProtocol> _appSpecificSearchConfig;
	id<FBSearchStyleConfig> _searchStyleConfiguration;

}

@property (assign,nonatomic) unsigned long long searchMode;                                                  //@synthesize searchMode=_searchMode - In the implementation block
@property (nonatomic,retain) FBScopedSearchPageSearchConfig * scopedSearchPageSearchConfig;                  //@synthesize scopedSearchPageSearchConfig=_scopedSearchPageSearchConfig - In the implementation block
@property (nonatomic,retain) id<FBSearchBaseAppSpecificConfigProtocol> appSpecificSearchConfig;              //@synthesize appSpecificSearchConfig=_appSpecificSearchConfig - In the implementation block
@property (nonatomic,retain) id<FBSearchStyleConfig> searchStyleConfiguration;                               //@synthesize searchStyleConfiguration=_searchStyleConfiguration - In the implementation block
-(unsigned long long)searchMode;
-(BOOL)_isGKEnabledWithSpecifier:(const mc_gatekeeper_specifier_tRef)arg1 gatekeeperName:(id)arg2 ;
-(FBScopedSearchPageSearchConfig *)scopedSearchPageSearchConfig;
-(void)setScopedSearchPageSearchConfig:(FBScopedSearchPageSearchConfig *)arg1 ;
-(id<FBSearchBaseAppSpecificConfigProtocol>)appSpecificSearchConfig;
-(void)setAppSpecificSearchConfig:(id<FBSearchBaseAppSpecificConfigProtocol>)arg1 ;
-(id<FBSearchStyleConfig>)searchStyleConfiguration;
-(void)setSearchStyleConfiguration:(id<FBSearchStyleConfig>)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)setSearchMode:(unsigned long long)arg1 ;
@end

