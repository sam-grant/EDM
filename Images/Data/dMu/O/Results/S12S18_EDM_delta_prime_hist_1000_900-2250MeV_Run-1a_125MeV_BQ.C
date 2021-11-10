void S12S18_EDM_delta_prime_hist_1000_900-2250MeV_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__27 = new TH1D("h__27","S12S18_",22,-0.5230984,-0.07207442);
   h__27->SetBinContent(8,1);
   h__27->SetBinContent(9,14);
   h__27->SetBinContent(10,145);
   h__27->SetBinContent(11,469);
   h__27->SetBinContent(12,343);
   h__27->SetBinContent(13,28);
   h__27->SetEntries(1000);
   h__27->SetStats(0);
   h__27->SetLineWidth(3);
   h__27->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__27->GetXaxis()->CenterTitle(true);
   h__27->GetXaxis()->SetLabelFont(42);
   h__27->GetXaxis()->SetTitleSize(0.04);
   h__27->GetXaxis()->SetTitleOffset(1.1);
   h__27->GetXaxis()->SetTitleFont(42);
   h__27->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__27->GetYaxis()->CenterTitle(true);
   h__27->GetYaxis()->SetNdivisions(4000510);
   h__27->GetYaxis()->SetLabelFont(42);
   h__27->GetYaxis()->SetTitleSize(0.04);
   h__27->GetYaxis()->SetTitleOffset(1.1);
   h__27->GetYaxis()->SetTitleFont(42);
   h__27->GetZaxis()->SetLabelFont(42);
   h__27->GetZaxis()->SetTitleOffset(1);
   h__27->GetZaxis()->SetTitleFont(42);
   h__27->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.3034
#pm0.0005
");
   pt_LaTex = pt->AddText("0.015
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
