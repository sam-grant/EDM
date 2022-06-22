void S12S18_EDM_delta_prime_hist_1000_1000-2500MeV_Run-1c_250MeV_1000_2500MeV_randomised_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 13 18:32:19 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__9 = new TH1D("h__9","S12S18",32,0.3425225,0.6657573);
   h__9->SetBinContent(9,1);
   h__9->SetBinContent(10,8);
   h__9->SetBinContent(11,14);
   h__9->SetBinContent(12,54);
   h__9->SetBinContent(13,98);
   h__9->SetBinContent(14,119);
   h__9->SetBinContent(15,164);
   h__9->SetBinContent(16,181);
   h__9->SetBinContent(17,135);
   h__9->SetBinContent(18,85);
   h__9->SetBinContent(19,72);
   h__9->SetBinContent(20,36);
   h__9->SetBinContent(21,23);
   h__9->SetBinContent(22,4);
   h__9->SetBinContent(23,6);
   h__9->SetEntries(1000);
   h__9->SetStats(0);
   h__9->SetLineWidth(3);
   h__9->GetXaxis()->SetTitle("#delta^{BLIND} [mrad]");
   h__9->GetXaxis()->CenterTitle(true);
   h__9->GetXaxis()->SetLabelFont(42);
   h__9->GetXaxis()->SetTitleSize(0.04);
   h__9->GetXaxis()->SetTitleOffset(1.1);
   h__9->GetXaxis()->SetTitleFont(42);
   h__9->GetYaxis()->SetTitle("Trials  / 0.01 [mrad]");
   h__9->GetYaxis()->CenterTitle(true);
   h__9->GetYaxis()->SetNdivisions(4000510);
   h__9->GetYaxis()->SetLabelFont(42);
   h__9->GetYaxis()->SetTitleSize(0.04);
   h__9->GetYaxis()->SetTitleOffset(1.1);
   h__9->GetYaxis()->SetTitleFont(42);
   h__9->GetZaxis()->SetLabelFont(42);
   h__9->GetZaxis()->SetTitleOffset(1);
   h__9->GetZaxis()->SetTitleFont(42);
   h__9->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.4972
#pm0.0008
");
   pt_LaTex = pt->AddText("0.0241
#pm0.0005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
