/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, MNMomentsAppInviteButtonConfig, MNMomentsAppInviteLoggingData;

@interface MNMomentsAppInviteAttachmentViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _hasInstalledMoments;
	NSString* _title;
	NSString* _body;
	NSArray* _buttonConfigs;
	MNMomentsAppInviteButtonConfig* _photoButtonConfig;
	NSArray* _imageSources;
	MNMomentsAppInviteLoggingData* _loggingData;

}

@property (nonatomic,copy,readonly) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                                                 //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buttonConfigs;                                         //@synthesize buttonConfigs=_buttonConfigs - In the implementation block
@property (nonatomic,copy,readonly) MNMomentsAppInviteButtonConfig * photoButtonConfig;              //@synthesize photoButtonConfig=_photoButtonConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasInstalledMoments;                                             //@synthesize hasInstalledMoments=_hasInstalledMoments - In the implementation block
@property (nonatomic,copy,readonly) NSArray * imageSources;                                          //@synthesize imageSources=_imageSources - In the implementation block
@property (nonatomic,copy,readonly) MNMomentsAppInviteLoggingData * loggingData;                     //@synthesize loggingData=_loggingData - In the implementation block
-(MNMomentsAppInviteLoggingData *)loggingData;
-(NSArray *)buttonConfigs;
-(MNMomentsAppInviteButtonConfig *)photoButtonConfig;
-(NSArray *)imageSources;
-(id)initWithTitle:(id)arg1 body:(id)arg2 buttonConfigs:(id)arg3 photoButtonConfig:(id)arg4 hasInstalledMoments:(BOOL)arg5 imageSources:(id)arg6 loggingData:(id)arg7 ;
-(BOOL)hasInstalledMoments;
-(NSString *)title;
-(NSString *)body;
@end
