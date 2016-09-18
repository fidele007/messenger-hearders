/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBAvatarProtocol;
@class NSString, FBMemModelObject, FBCustomSearchConfig;

@interface FBSearchContext : NSObject <NSCopying> {

	NSString* _singleStateSemantics;
	FBMemModelObject*<FBAvatarProtocol> _singleStateEntity;
	unsigned long long _entryPointType;
	NSString* _defaultQueryString;
	NSString* _customPlaceholderText;
	NSString* _reactNativeSearchModule;
	NSString* _videoHomeSessionID;
	FBCustomSearchConfig* _customSearchConfig;

}

@property (nonatomic,copy,readonly) NSString * singleStateSemantics;                               //@synthesize singleStateSemantics=_singleStateSemantics - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBAvatarProtocol> singleStateEntity;              //@synthesize singleStateEntity=_singleStateEntity - In the implementation block
@property (nonatomic,readonly) unsigned long long entryPointType;                                  //@synthesize entryPointType=_entryPointType - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultQueryString;                                 //@synthesize defaultQueryString=_defaultQueryString - In the implementation block
@property (nonatomic,copy,readonly) NSString * customPlaceholderText;                              //@synthesize customPlaceholderText=_customPlaceholderText - In the implementation block
@property (nonatomic,copy,readonly) NSString * reactNativeSearchModule;                            //@synthesize reactNativeSearchModule=_reactNativeSearchModule - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoHomeSessionID;                                 //@synthesize videoHomeSessionID=_videoHomeSessionID - In the implementation block
@property (nonatomic,readonly) FBCustomSearchConfig * customSearchConfig;                          //@synthesize customSearchConfig=_customSearchConfig - In the implementation block
-(NSString *)videoHomeSessionID;
-(id)initWithSingleStateEntity:(id)arg1 singleStateSemantics:(id)arg2 defaultQueryString:(id)arg3 entryPointType:(unsigned long long)arg4 customPlaceholderText:(id)arg5 reactNativeSearchModule:(id)arg6 videoHomeSessionID:(id)arg7 customSearchConfig:(id)arg8 ;
-(id)initWithSingleStateEntity:(id)arg1 ;
-(id)initWithDefaultQueryString:(id)arg1 ;
-(id)initWithSingleStateEntity:(id)arg1 defaultQueryString:(id)arg2 entryPointType:(unsigned long long)arg3 ;
-(id)initWithSingleStateEntity:(id)arg1 singleStateSemantics:(id)arg2 defaultQueryString:(id)arg3 entryPointType:(unsigned long long)arg4 ;
-(id)initWithSingleStateEntity:(id)arg1 singleStateSemantics:(id)arg2 defaultQueryString:(id)arg3 entryPointType:(unsigned long long)arg4 customPlaceholderText:(id)arg5 reactNativeSearchModule:(id)arg6 ;
-(id)initWithSingleStateEntity:(id)arg1 singleStateSemantics:(id)arg2 defaultQueryString:(id)arg3 entryPointType:(unsigned long long)arg4 customPlaceholderText:(id)arg5 reactNativeSearchModule:(id)arg6 videoHomeSessionID:(id)arg7 ;
-(NSString *)singleStateSemantics;
-(FBMemModelObject*<FBAvatarProtocol>)singleStateEntity;
-(unsigned long long)entryPointType;
-(NSString *)defaultQueryString;
-(NSString *)reactNativeSearchModule;
-(FBCustomSearchConfig *)customSearchConfig;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)customPlaceholderText;
@end

