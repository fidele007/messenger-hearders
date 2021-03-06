/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:55 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSOrderedSet, NSString, FBComposerMarketplaceCrossPostSetting;

@interface FBComposerForSaleConfiguration : FBValueObject <NSCopying, NSCoding> {

	BOOL _isCategoryOptional;
	BOOL _shouldInterceptPost;
	BOOL _shouldOptInPostToMarketplace;
	BOOL _shouldUseZipCodeForPickupNote;
	BOOL _isLocationMandatory;
	BOOL _useNeighborhoodDataSource;
	BOOL _shouldShowVoiceSwitcherPublisherBar;
	NSArray* _currencies;
	NSOrderedSet* _forSaleCategories;
	NSString* _prefillCategoryID;
	NSArray* _postInterceptWords;
	NSArray* _postInterceptWordsAfterNumber;
	unsigned long long _targetType;
	FBComposerMarketplaceCrossPostSetting* _marketplaceCrossPostSetting;
	unsigned long long _composerStyle;

}

@property (nonatomic,copy,readonly) NSArray * currencies;                                                             //@synthesize currencies=_currencies - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * forSaleCategories;                                                 //@synthesize forSaleCategories=_forSaleCategories - In the implementation block
@property (nonatomic,copy,readonly) NSString * prefillCategoryID;                                                     //@synthesize prefillCategoryID=_prefillCategoryID - In the implementation block
@property (nonatomic,readonly) BOOL isCategoryOptional;                                                               //@synthesize isCategoryOptional=_isCategoryOptional - In the implementation block
@property (nonatomic,readonly) BOOL shouldInterceptPost;                                                              //@synthesize shouldInterceptPost=_shouldInterceptPost - In the implementation block
@property (nonatomic,copy,readonly) NSArray * postInterceptWords;                                                     //@synthesize postInterceptWords=_postInterceptWords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * postInterceptWordsAfterNumber;                                          //@synthesize postInterceptWordsAfterNumber=_postInterceptWordsAfterNumber - In the implementation block
@property (nonatomic,readonly) BOOL shouldOptInPostToMarketplace;                                                     //@synthesize shouldOptInPostToMarketplace=_shouldOptInPostToMarketplace - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseZipCodeForPickupNote;                                                    //@synthesize shouldUseZipCodeForPickupNote=_shouldUseZipCodeForPickupNote - In the implementation block
@property (nonatomic,readonly) BOOL isLocationMandatory;                                                              //@synthesize isLocationMandatory=_isLocationMandatory - In the implementation block
@property (nonatomic,readonly) unsigned long long targetType;                                                         //@synthesize targetType=_targetType - In the implementation block
@property (nonatomic,copy,readonly) FBComposerMarketplaceCrossPostSetting * marketplaceCrossPostSetting;              //@synthesize marketplaceCrossPostSetting=_marketplaceCrossPostSetting - In the implementation block
@property (nonatomic,readonly) unsigned long long composerStyle;                                                      //@synthesize composerStyle=_composerStyle - In the implementation block
@property (nonatomic,readonly) BOOL useNeighborhoodDataSource;                                                        //@synthesize useNeighborhoodDataSource=_useNeighborhoodDataSource - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowVoiceSwitcherPublisherBar;                                              //@synthesize shouldShowVoiceSwitcherPublisherBar=_shouldShowVoiceSwitcherPublisherBar - In the implementation block
-(id)initWithCurrencies:(id)arg1 forSaleCategories:(id)arg2 prefillCategoryID:(id)arg3 isCategoryOptional:(BOOL)arg4 shouldInterceptPost:(BOOL)arg5 postInterceptWords:(id)arg6 postInterceptWordsAfterNumber:(id)arg7 shouldOptInPostToMarketplace:(BOOL)arg8 shouldUseZipCodeForPickupNote:(BOOL)arg9 isLocationMandatory:(BOOL)arg10 targetType:(unsigned long long)arg11 marketplaceCrossPostSetting:(id)arg12 composerStyle:(unsigned long long)arg13 useNeighborhoodDataSource:(BOOL)arg14 shouldShowVoiceSwitcherPublisherBar:(BOOL)arg15 ;
-(NSArray *)currencies;
-(NSOrderedSet *)forSaleCategories;
-(NSString *)prefillCategoryID;
-(BOOL)isCategoryOptional;
-(BOOL)shouldInterceptPost;
-(NSArray *)postInterceptWords;
-(NSArray *)postInterceptWordsAfterNumber;
-(BOOL)shouldOptInPostToMarketplace;
-(BOOL)shouldUseZipCodeForPickupNote;
-(BOOL)isLocationMandatory;
-(FBComposerMarketplaceCrossPostSetting *)marketplaceCrossPostSetting;
-(unsigned long long)composerStyle;
-(BOOL)useNeighborhoodDataSource;
-(BOOL)shouldShowVoiceSwitcherPublisherBar;
-(unsigned long long)targetType;
@end

