/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectID, PLImageSource, NSMutableSet, NSMutableArray, PLLoadRequestKey, NSArray;

@interface PLImageLoadRequest : NSObject {

	NSManagedObjectID* _assetID;
	PLImageSource* _source;
	NSMutableSet* _queues;
	int _priority;
	NSMutableArray* _completionBlocks;
	PLLoadRequestKey* _key;

}

@property (assign,nonatomic) int priority;                                 //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSArray * completionBlocks; 
@property (nonatomic,retain,readonly) PLImageSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,retain,readonly) PLLoadRequestKey * key; 
+(id)requestWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3 completion:(/*^block*/id)arg4 loadingQueue:(id)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(PLLoadRequestKey *)key;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(PLImageSource *)source;
-(BOOL)isImageLoadingQueueRegistered:(id)arg1 ;
-(void)deregisterImageLoadingQueue:(id)arg1 ;
-(BOOL)someImageLoadingQueuesRegistered;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)registerImageLoadingQueue:(id)arg1 ;
-(void)notifyImageLoadingQueuesOfImageAvailability:(id)arg1 ;
-(id)assetInPhotoLibrary:(id)arg1 ;
-(id)initWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3 ;
-(NSArray *)completionBlocks;
@end

