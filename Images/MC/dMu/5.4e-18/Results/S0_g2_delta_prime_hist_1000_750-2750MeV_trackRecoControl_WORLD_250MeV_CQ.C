void S0_g2_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:42:39 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__28 = new TH1D("h__28","",54,-0.8230673,0.2621341);
   h__28->SetBinContent(10,1);
   h__28->SetBinContent(18,2);
   h__28->SetBinContent(20,5);
   h__28->SetBinContent(21,1);
   h__28->SetBinContent(22,17);
   h__28->SetBinContent(23,29);
   h__28->SetBinContent(24,55);
   h__28->SetBinContent(25,119);
   h__28->SetBinContent(26,238);
   h__28->SetBinContent(27,288);
   h__28->SetBinContent(28,199);
   h__28->SetBinContent(29,41);
   h__28->SetBinContent(30,5);
   h__28->SetEntries(1000);
   h__28->SetStats(0);
   h__28->SetLineWidth(3);
   h__28->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__28->GetXaxis()->CenterTitle(true);
   h__28->GetXaxis()->SetLabelFont(42);
   h__28->GetXaxis()->SetTitleSize(0.04);
   h__28->GetXaxis()->SetTitleOffset(1.1);
   h__28->GetXaxis()->SetTitleFont(42);
   h__28->GetYaxis()->SetTitle("Trials");
   h__28->GetYaxis()->CenterTitle(true);
   h__28->GetYaxis()->SetNdivisions(4000510);
   h__28->GetYaxis()->SetLabelFont(42);
   h__28->GetYaxis()->SetTitleSize(0.04);
   h__28->GetYaxis()->SetTitleOffset(1.1);
   h__28->GetYaxis()->SetTitleFont(42);
   h__28->GetZaxis()->SetLabelFont(42);
   h__28->GetZaxis()->SetTitleOffset(1);
   h__28->GetZaxis()->SetTitleFont(42);
   h__28->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.3033
#pm0.001
");
   pt_LaTex = pt->AddText("0.034
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
