void S18_EDM_delta_prime_hist_1000_900-2250MeV_Run-1b_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:59 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__32 = new TH1D("h__32","S18_",20,-0.2480719,0.1552898);
   h__32->SetBinContent(10,211);
   h__32->SetBinContent(11,789);
   h__32->SetEntries(1000);
   h__32->SetStats(0);
   h__32->SetLineWidth(3);
   h__32->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__32->GetXaxis()->CenterTitle(true);
   h__32->GetXaxis()->SetLabelFont(42);
   h__32->GetXaxis()->SetTitleSize(0.04);
   h__32->GetXaxis()->SetTitleOffset(1.1);
   h__32->GetXaxis()->SetTitleFont(42);
   h__32->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__32->GetYaxis()->CenterTitle(true);
   h__32->GetYaxis()->SetNdivisions(4000510);
   h__32->GetYaxis()->SetLabelFont(42);
   h__32->GetYaxis()->SetTitleSize(0.04);
   h__32->GetYaxis()->SetTitleOffset(1.1);
   h__32->GetYaxis()->SetTitleFont(42);
   h__32->GetZaxis()->SetLabelFont(42);
   h__32->GetZaxis()->SetTitleOffset(1);
   h__32->GetZaxis()->SetTitleFont(42);
   h__32->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.04242
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0049
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
