void S12S18_EDM_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:44:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__36 = new TH1D("h__36","",55,1.13469,2.249492);
   h__36->SetBinContent(23,5);
   h__36->SetBinContent(24,13);
   h__36->SetBinContent(25,57);
   h__36->SetBinContent(26,110);
   h__36->SetBinContent(27,162);
   h__36->SetBinContent(28,215);
   h__36->SetBinContent(29,196);
   h__36->SetBinContent(30,128);
   h__36->SetBinContent(31,71);
   h__36->SetBinContent(32,30);
   h__36->SetBinContent(33,9);
   h__36->SetBinContent(34,1);
   h__36->SetBinContent(35,2);
   h__36->SetBinContent(36,1);
   h__36->SetEntries(1000);
   h__36->SetStats(0);
   h__36->SetLineWidth(3);
   h__36->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__36->GetXaxis()->CenterTitle(true);
   h__36->GetXaxis()->SetLabelFont(42);
   h__36->GetXaxis()->SetTitleSize(0.04);
   h__36->GetXaxis()->SetTitleOffset(1.1);
   h__36->GetXaxis()->SetTitleFont(42);
   h__36->GetYaxis()->SetTitle("Trials");
   h__36->GetYaxis()->CenterTitle(true);
   h__36->GetYaxis()->SetNdivisions(4000510);
   h__36->GetYaxis()->SetLabelFont(42);
   h__36->GetYaxis()->SetTitleSize(0.04);
   h__36->GetYaxis()->SetTitleOffset(1.1);
   h__36->GetYaxis()->SetTitleFont(42);
   h__36->GetZaxis()->SetLabelFont(42);
   h__36->GetZaxis()->SetTitleOffset(1);
   h__36->GetZaxis()->SetTitleFont(42);
   h__36->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.697
#pm0.001
");
   pt_LaTex = pt->AddText("0.038
#pm0.0009
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
