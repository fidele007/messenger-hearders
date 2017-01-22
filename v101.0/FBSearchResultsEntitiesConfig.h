/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBSearchResultsUserConfig, FBSearchResultsPagesConfig;

@interface FBSearchResultsEntitiesConfig : FBValueObject <NSCopying> {

	BOOL _enableMultilineResultsCompactModule;
	FBSearchResultsUserConfig* _userConfig;
	FBSearchResultsPagesConfig* _pagesConfig;

}

@property (nonatomic,copy,readonly) FBSearchResultsUserConfig * userConfig;                //@synthesize userConfig=_userConfig - In the implementation block
@property (nonatomic,copy,readonly) FBSearchResultsPagesConfig * pagesConfig;              //@synthesize pagesConfig=_pagesConfig - In the implementation block
@property (nonatomic,readonly) BOOL enableMultilineResultsCompactModule;                   //@synthesize enableMultilineResultsCompactModule=_enableMultilineResultsCompactModule - In the implementation block
-(id)initWithUserConfig:(id)arg1 pagesConfig:(id)arg2 enableMultilineResultsCompactModule:(BOOL)arg3 ;
-(FBSearchResultsUserConfig *)userConfig;
-(FBSearchResultsPagesConfig *)pagesConfig;
-(BOOL)enableMultilineResultsCompactModule;
@end
