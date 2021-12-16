void S12S18_g2_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:46:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__41 = new TH1D("h__41","",50,-0.4585504,0.5460444);
   h__41->SetBinContent(25,908);
   h__41->SetBinContent(26,92);
   h__41->SetEntries(1000);
   h__41->SetStats(0);
   h__41->SetLineWidth(3);
   h__41->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__41->GetXaxis()->CenterTitle(true);
   h__41->GetXaxis()->SetLabelFont(42);
   h__41->GetXaxis()->SetTitleSize(0.04);
   h__41->GetXaxis()->SetTitleOffset(1.1);
   h__41->GetXaxis()->SetTitleFont(42);
   h__41->GetYaxis()->SetTitle("Trials");
   h__41->GetYaxis()->CenterTitle(true);
   h__41->GetYaxis()->SetNdivisions(4000510);
   h__41->GetYaxis()->SetLabelFont(42);
   h__41->GetYaxis()->SetTitleSize(0.04);
   h__41->GetYaxis()->SetTitleOffset(1.1);
   h__41->GetYaxis()->SetTitleFont(42);
   h__41->GetZaxis()->SetLabelFont(42);
   h__41->GetZaxis()->SetTitleOffset(1);
   h__41->GetZaxis()->SetTitleFont(42);
   h__41->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.04128
#pm6e-05
");
   pt_LaTex = pt->AddText("0.0019
#pm4e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
