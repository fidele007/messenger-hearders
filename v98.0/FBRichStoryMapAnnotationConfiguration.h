/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface FBRichStoryMapAnnotationConfiguration : NSObject <MKAnnotation> {

	NSString* _title;
	NSString* _subtitle;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 title:(id)arg3 subtitle:(id)arg4 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
@end

