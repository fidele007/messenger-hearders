/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntityMetadataProtocol.h>

@class NSArray, NSDate, NSString;

@interface FBRichStoryEntityMetadata : NSObject <FBRichStoryEntityMetadataProtocol> {

	NSArray* _contributors;
	NSDate* _creationDate;

}

@property (nonatomic,copy) NSArray * contributors;                  //@synthesize contributors=_contributors - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                   //@synthesize creationDate=_creationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataWithContributors:(id)arg1 creationDate:(id)arg2 ;
-(id)initWithContributors:(id)arg1 creationDate:(id)arg2 ;
-(void)setContributors:(NSArray *)arg1 ;
-(NSArray *)contributors;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
@end

