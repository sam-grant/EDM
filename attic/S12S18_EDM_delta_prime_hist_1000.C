void S12S18_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:45:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__60 = new TH1D("h__60","",60,0.9515408,2.167314);
   h__60->SetBinContent(21,2);
   h__60->SetBinContent(22,3);
   h__60->SetBinContent(23,7);
   h__60->SetBinContent(24,12);
   h__60->SetBinContent(25,37);
   h__60->SetBinContent(26,44);
   h__60->SetBinContent(27,68);
   h__60->SetBinContent(28,80);
   h__60->SetBinContent(29,94);
   h__60->SetBinContent(30,105);
   h__60->SetBinContent(31,121);
   h__60->SetBinContent(32,111);
   h__60->SetBinContent(33,82);
   h__60->SetBinContent(34,72);
   h__60->SetBinContent(35,51);
   h__60->SetBinContent(36,31);
   h__60->SetBinContent(37,37);
   h__60->SetBinContent(38,17);
   h__60->SetBinContent(39,11);
   h__60->SetBinContent(40,9);
   h__60->SetBinContent(41,1);
   h__60->SetBinContent(42,1);
   h__60->SetBinContent(44,1);
   h__60->SetBinContent(45,1);
   h__60->SetBinContent(46,1);
   h__60->SetBinContent(47,1);
   h__60->SetEntries(1000);
   h__60->SetStats(0);
   h__60->SetLineWidth(3);
   h__60->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__60->GetXaxis()->CenterTitle(true);
   h__60->GetXaxis()->SetLabelFont(42);
   h__60->GetXaxis()->SetTitleSize(0.04);
   h__60->GetXaxis()->SetTitleOffset(1.1);
   h__60->GetXaxis()->SetTitleFont(42);
   h__60->GetYaxis()->SetTitle("Trials");
   h__60->GetYaxis()->CenterTitle(true);
   h__60->GetYaxis()->SetNdivisions(4000510);
   h__60->GetYaxis()->SetLabelFont(42);
   h__60->GetYaxis()->SetTitleSize(0.04);
   h__60->GetYaxis()->SetTitleOffset(1.1);
   h__60->GetYaxis()->SetTitleFont(42);
   h__60->GetZaxis()->SetLabelFont(42);
   h__60->GetZaxis()->SetTitleOffset(1);
   h__60->GetZaxis()->SetTitleFont(42);
   h__60->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.57
#pm0.002
");
   pt_LaTex = pt->AddText("0.074
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
