void S18_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:47:04 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__86 = new TH1D("h__86","",52,-0.0221983,1.030934);
   h__86->SetBinContent(23,5);
   h__86->SetBinContent(24,38);
   h__86->SetBinContent(25,157);
   h__86->SetBinContent(26,271);
   h__86->SetBinContent(27,297);
   h__86->SetBinContent(28,154);
   h__86->SetBinContent(29,56);
   h__86->SetBinContent(30,18);
   h__86->SetBinContent(31,3);
   h__86->SetBinContent(32,1);
   h__86->SetEntries(1000);
   h__86->SetStats(0);
   h__86->SetLineWidth(3);
   h__86->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__86->GetXaxis()->CenterTitle(true);
   h__86->GetXaxis()->SetLabelFont(42);
   h__86->GetXaxis()->SetTitleSize(0.04);
   h__86->GetXaxis()->SetTitleOffset(1.1);
   h__86->GetXaxis()->SetTitleFont(42);
   h__86->GetYaxis()->SetTitle("Trials");
   h__86->GetYaxis()->CenterTitle(true);
   h__86->GetYaxis()->SetNdivisions(4000510);
   h__86->GetYaxis()->SetLabelFont(42);
   h__86->GetYaxis()->SetTitleSize(0.04);
   h__86->GetYaxis()->SetTitleOffset(1.1);
   h__86->GetYaxis()->SetTitleFont(42);
   h__86->GetZaxis()->SetLabelFont(42);
   h__86->GetZaxis()->SetTitleOffset(1);
   h__86->GetZaxis()->SetTitleFont(42);
   h__86->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.5071
#pm0.0008
");
   pt_LaTex = pt->AddText("0.026
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
