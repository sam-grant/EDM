void S0S12S18_g2_delta_prime_hist_1000_750.000000-2750.000000MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:11:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__16 = new TH1D("h__16","",52,-0.6911082,0.3506607);
   h__16->SetBinContent(22,2);
   h__16->SetBinContent(23,19);
   h__16->SetBinContent(24,117);
   h__16->SetBinContent(25,382);
   h__16->SetBinContent(26,342);
   h__16->SetBinContent(27,118);
   h__16->SetBinContent(28,18);
   h__16->SetBinContent(29,1);
   h__16->SetBinContent(30,1);
   h__16->SetEntries(1000);
   h__16->SetStats(0);
   h__16->SetLineWidth(3);
   h__16->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__16->GetXaxis()->CenterTitle(true);
   h__16->GetXaxis()->SetLabelFont(42);
   h__16->GetXaxis()->SetTitleSize(0.04);
   h__16->GetXaxis()->SetTitleOffset(1.1);
   h__16->GetXaxis()->SetTitleFont(42);
   h__16->GetYaxis()->SetTitle("Trials");
   h__16->GetYaxis()->CenterTitle(true);
   h__16->GetYaxis()->SetNdivisions(4000510);
   h__16->GetYaxis()->SetLabelFont(42);
   h__16->GetYaxis()->SetTitleSize(0.04);
   h__16->GetYaxis()->SetTitleOffset(1.1);
   h__16->GetYaxis()->SetTitleFont(42);
   h__16->GetZaxis()->SetLabelFont(42);
   h__16->GetZaxis()->SetTitleOffset(1);
   h__16->GetZaxis()->SetTitleFont(42);
   h__16->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.1906
#pm0.0006
");
   pt_LaTex = pt->AddText("0.019
#pm0.0004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
