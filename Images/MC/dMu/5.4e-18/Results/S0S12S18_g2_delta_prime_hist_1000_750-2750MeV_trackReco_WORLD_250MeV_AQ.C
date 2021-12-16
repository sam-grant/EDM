void S0S12S18_g2_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:51:16 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__52 = new TH1D("h__52","",50,-0.6497825,0.3571993);
   h__52->SetBinContent(25,356);
   h__52->SetBinContent(26,644);
   h__52->SetEntries(1000);
   h__52->SetStats(0);
   h__52->SetLineWidth(3);
   h__52->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__52->GetXaxis()->CenterTitle(true);
   h__52->GetXaxis()->SetLabelFont(42);
   h__52->GetXaxis()->SetTitleSize(0.04);
   h__52->GetXaxis()->SetTitleOffset(1.1);
   h__52->GetXaxis()->SetTitleFont(42);
   h__52->GetYaxis()->SetTitle("Trials");
   h__52->GetYaxis()->CenterTitle(true);
   h__52->GetYaxis()->SetNdivisions(4000510);
   h__52->GetYaxis()->SetLabelFont(42);
   h__52->GetYaxis()->SetTitleSize(0.04);
   h__52->GetYaxis()->SetTitleOffset(1.1);
   h__52->GetYaxis()->SetTitleFont(42);
   h__52->GetZaxis()->SetLabelFont(42);
   h__52->GetZaxis()->SetTitleOffset(1);
   h__52->GetZaxis()->SetTitleFont(42);
   h__52->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.1451
#pm0.0001
");
   pt_LaTex = pt->AddText("0.0035
#pm8e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
