void S12S18_EDM_delta_prime_hist_1000_750-2500MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  2 14:43:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__15 = new TH1D("h__15","S12S18",23,0.3798364,0.8550108);
   h__15->SetBinContent(8,3);
   h__15->SetBinContent(9,15);
   h__15->SetBinContent(10,101);
   h__15->SetBinContent(11,206);
   h__15->SetBinContent(12,289);
   h__15->SetBinContent(13,219);
   h__15->SetBinContent(14,106);
   h__15->SetBinContent(15,45);
   h__15->SetBinContent(16,12);
   h__15->SetBinContent(17,1);
   h__15->SetBinContent(18,3);
   h__15->SetEntries(1000);
   h__15->SetStats(0);
   h__15->SetLineWidth(3);
   h__15->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__15->GetXaxis()->CenterTitle(true);
   h__15->GetXaxis()->SetLabelFont(42);
   h__15->GetXaxis()->SetTitleSize(0.04);
   h__15->GetXaxis()->SetTitleOffset(1.1);
   h__15->GetXaxis()->SetTitleFont(42);
   h__15->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__15->GetYaxis()->CenterTitle(true);
   h__15->GetYaxis()->SetNdivisions(4000510);
   h__15->GetYaxis()->SetLabelFont(42);
   h__15->GetYaxis()->SetTitleSize(0.04);
   h__15->GetYaxis()->SetTitleOffset(1.1);
   h__15->GetYaxis()->SetTitleFont(42);
   h__15->GetZaxis()->SetLabelFont(42);
   h__15->GetZaxis()->SetTitleOffset(1);
   h__15->GetZaxis()->SetTitleFont(42);
   h__15->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.621
#pm0.0009
");
   pt_LaTex = pt->AddText("0.029
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
