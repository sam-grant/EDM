void S18_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__80 = new TH1D("h__80","",53,0.04155341,1.103928);
   h__80->SetBinContent(23,1);
   h__80->SetBinContent(24,6);
   h__80->SetBinContent(25,49);
   h__80->SetBinContent(26,154);
   h__80->SetBinContent(27,265);
   h__80->SetBinContent(28,292);
   h__80->SetBinContent(29,142);
   h__80->SetBinContent(30,63);
   h__80->SetBinContent(31,23);
   h__80->SetBinContent(32,2);
   h__80->SetBinContent(33,3);
   h__80->SetEntries(1000);
   h__80->SetStats(0);
   h__80->SetLineWidth(3);
   h__80->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__80->GetXaxis()->CenterTitle(true);
   h__80->GetXaxis()->SetLabelFont(42);
   h__80->GetXaxis()->SetTitleSize(0.04);
   h__80->GetXaxis()->SetTitleOffset(1.1);
   h__80->GetXaxis()->SetTitleFont(42);
   h__80->GetYaxis()->SetTitle("Trials");
   h__80->GetYaxis()->CenterTitle(true);
   h__80->GetYaxis()->SetNdivisions(4000510);
   h__80->GetYaxis()->SetLabelFont(42);
   h__80->GetYaxis()->SetTitleSize(0.04);
   h__80->GetYaxis()->SetTitleOffset(1.1);
   h__80->GetYaxis()->SetTitleFont(42);
   h__80->GetZaxis()->SetLabelFont(42);
   h__80->GetZaxis()->SetTitleOffset(1);
   h__80->GetZaxis()->SetTitleFont(42);
   h__80->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.5849
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
