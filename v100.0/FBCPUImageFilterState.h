/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBCPUImageFilterState : FBValueObject <NSCopying, NSCoding> {

	BOOL _isAutoEnhance;
	NSString* _filterName;
	NSString* _parameterString;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * filterName;                   //@synthesize filterName=_filterName - In the implementation block
@property (nonatomic,copy,readonly) NSString * parameterString;              //@synthesize parameterString=_parameterString - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL isAutoEnhance;                           //@synthesize isAutoEnhance=_isAutoEnhance - In the implementation block
-(NSString *)filterName;
-(id)initWithFilterName:(id)arg1 parameterString:(id)arg2 displayName:(id)arg3 isAutoEnhance:(BOOL)arg4 ;
-(BOOL)isAutoEnhance;
-(NSString *)parameterString;
-(NSString *)displayName;
@end
