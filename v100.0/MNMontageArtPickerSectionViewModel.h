/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, FBMemPageInfo;

@interface MNMontageArtPickerSectionViewModel : FBValueObject <NSCopying> {

	NSString* _sectionID;
	NSString* _title;
	NSArray* _sectionUnits;
	FBMemPageInfo* _pageInfo;
	NSString* _orderToken;

}

@property (nonatomic,copy,readonly) NSString * sectionID;                  //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionUnits;                //@synthesize sectionUnits=_sectionUnits - In the implementation block
@property (nonatomic,copy,readonly) FBMemPageInfo * pageInfo;              //@synthesize pageInfo=_pageInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * orderToken;                 //@synthesize orderToken=_orderToken - In the implementation block
-(FBMemPageInfo *)pageInfo;
-(NSArray *)sectionUnits;
-(NSString *)orderToken;
-(id)initWithSectionID:(id)arg1 title:(id)arg2 sectionUnits:(id)arg3 pageInfo:(id)arg4 orderToken:(id)arg5 ;
-(NSString *)title;
-(NSString *)sectionID;
@end

