/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLQuery, NSString;

@interface FBGraphQLQueryExportedField : NSObject {

	FBGraphQLQuery* _targetQuery;
	NSString* _exportedFieldName;
	unsigned long long _pluralMode;
	unsigned long long _fallbackBehavior;

}

@property (nonatomic,readonly) FBGraphQLQuery * targetQuery;                     //@synthesize targetQuery=_targetQuery - In the implementation block
@property (nonatomic,copy,readonly) NSString * exportedFieldName;                //@synthesize exportedFieldName=_exportedFieldName - In the implementation block
@property (nonatomic,readonly) unsigned long long pluralMode;                    //@synthesize pluralMode=_pluralMode - In the implementation block
@property (nonatomic,readonly) unsigned long long fallbackBehavior;              //@synthesize fallbackBehavior=_fallbackBehavior - In the implementation block
-(unsigned long long)pluralMode;
-(FBGraphQLQuery *)targetQuery;
-(id)initWithTargetQuery:(id)arg1 exportedFieldName:(id)arg2 pluralMode:(unsigned long long)arg3 fallbackBehavior:(unsigned long long)arg4 ;
-(NSString *)exportedFieldName;
-(unsigned long long)fallbackBehavior;
@end
