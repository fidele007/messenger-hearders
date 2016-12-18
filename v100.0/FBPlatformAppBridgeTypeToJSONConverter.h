/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBPlatformAppBridgeTypeToJSONConverter : NSObject {

	NSMutableArray* _createdPasteboardNames;

}

@property (nonatomic,retain) NSMutableArray * createdPasteboardNames;              //@synthesize createdPasteboardNames=_createdPasteboardNames - In the implementation block
+(id)appBridgeTypeFromJSON:(id)arg1 ;
-(void)deleteCreatedPasteboards;
-(id)jsonDictionaryFromDictionaryWithAppBridgeTypes:(id)arg1 excludeBinaries:(BOOL)arg2 ;
-(id)dictionaryWithAppBridgeTypesFromJSONDictionary:(id)arg1 ;
-(void)setCreatedPasteboardNames:(NSMutableArray *)arg1 ;
-(id)convertedDictionaryFromDictionary:(id)arg1 options:(int)arg2 ;
-(id)convertedArrayFromArray:(id)arg1 options:(int)arg2 ;
-(id)jsonFromData:(id)arg1 tag:(id)arg2 options:(int)arg3 ;
-(id)convertedObjectFromObject:(id)arg1 options:(int)arg2 ;
-(NSMutableArray *)createdPasteboardNames;
-(id)init;
@end
