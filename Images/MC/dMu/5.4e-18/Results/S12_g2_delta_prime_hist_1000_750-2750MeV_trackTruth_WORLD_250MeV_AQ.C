void S12_g2_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:45:43 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__39 = new TH1D("h__39","",50,-0.5626938,0.4409581);
   h__39->SetBinContent(25,862);
   h__39->SetBinContent(26,138);
   h__39->SetEntries(1000);
   h__39->SetStats(0);
   h__39->SetLineWidth(3);
   h__39->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__39->GetXaxis()->CenterTitle(true);
   h__39->GetXaxis()->SetLabelFont(42);
   h__39->GetXaxis()->SetTitleSize(0.04);
   h__39->GetXaxis()->SetTitleOffset(1.1);
   h__39->GetXaxis()->SetTitleFont(42);
   h__39->GetYaxis()->SetTitle("Trials");
   h__39->GetYaxis()->CenterTitle(true);
   h__39->GetYaxis()->SetNdivisions(4000510);
   h__39->GetYaxis()->SetLabelFont(42);
   h__39->GetYaxis()->SetTitleSize(0.04);
   h__39->GetYaxis()->SetTitleOffset(1.1);
   h__39->GetYaxis()->SetTitleFont(42);
   h__39->GetZaxis()->SetLabelFont(42);
   h__39->GetZaxis()->SetTitleOffset(1);
   h__39->GetZaxis()->SetTitleFont(42);
   h__39->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.06342
#pm8e-05
");
   pt_LaTex = pt->AddText("0.0024
#pm5e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
