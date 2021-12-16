void S0S12S18_EDM_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:45:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__37 = new TH1D("h__37","",54,1.148231,2.241333);
   h__37->SetBinContent(23,3);
   h__37->SetBinContent(24,12);
   h__37->SetBinContent(25,65);
   h__37->SetBinContent(26,142);
   h__37->SetBinContent(27,236);
   h__37->SetBinContent(28,274);
   h__37->SetBinContent(29,161);
   h__37->SetBinContent(30,76);
   h__37->SetBinContent(31,26);
   h__37->SetBinContent(32,2);
   h__37->SetBinContent(33,2);
   h__37->SetBinContent(34,1);
   h__37->SetEntries(1000);
   h__37->SetStats(0);
   h__37->SetLineWidth(3);
   h__37->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__37->GetXaxis()->CenterTitle(true);
   h__37->GetXaxis()->SetLabelFont(42);
   h__37->GetXaxis()->SetTitleSize(0.04);
   h__37->GetXaxis()->SetTitleOffset(1.1);
   h__37->GetXaxis()->SetTitleFont(42);
   h__37->GetYaxis()->SetTitle("Trials");
   h__37->GetYaxis()->CenterTitle(true);
   h__37->GetYaxis()->SetNdivisions(4000510);
   h__37->GetYaxis()->SetLabelFont(42);
   h__37->GetYaxis()->SetTitleSize(0.04);
   h__37->GetYaxis()->SetTitleOffset(1.1);
   h__37->GetYaxis()->SetTitleFont(42);
   h__37->GetZaxis()->SetLabelFont(42);
   h__37->GetZaxis()->SetTitleOffset(1);
   h__37->GetZaxis()->SetTitleFont(42);
   h__37->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.698
#pm0.001
");
   pt_LaTex = pt->AddText("0.031
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
