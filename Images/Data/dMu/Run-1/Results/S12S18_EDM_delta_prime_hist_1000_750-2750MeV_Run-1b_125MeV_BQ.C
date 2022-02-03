void S12S18_EDM_delta_prime_hist_1000_750-2750MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Feb  3 14:53:23 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__9 = new TH1D("h__9","S12S18",20,0.2007894,0.6191751);
   h__9->SetBinContent(7,1);
   h__9->SetBinContent(8,11);
   h__9->SetBinContent(9,111);
   h__9->SetBinContent(10,248);
   h__9->SetBinContent(11,299);
   h__9->SetBinContent(12,209);
   h__9->SetBinContent(13,84);
   h__9->SetBinContent(14,26);
   h__9->SetBinContent(15,6);
   h__9->SetBinContent(16,3);
   h__9->SetBinContent(17,1);
   h__9->SetBinContent(20,1);
   h__9->SetEntries(1000);
   h__9->SetStats(0);
   h__9->SetLineWidth(3);
   h__9->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__9->GetXaxis()->CenterTitle(true);
   h__9->GetXaxis()->SetLabelFont(42);
   h__9->GetXaxis()->SetTitleSize(0.04);
   h__9->GetXaxis()->SetTitleOffset(1.1);
   h__9->GetXaxis()->SetTitleFont(42);
   h__9->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
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
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.42
#pm0.0009
");
   pt_LaTex = pt->AddText("0.028
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
