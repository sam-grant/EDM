void S18_EDM_delta_prime_hist_1000_750.000000-2750.000000MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 18:21:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__9 = new TH1D("h__9","",55,-1.705605,-0.5957471);
   h__9->SetBinContent(17,1);
   h__9->SetBinContent(18,2);
   h__9->SetBinContent(19,2);
   h__9->SetBinContent(20,2);
   h__9->SetBinContent(21,15);
   h__9->SetBinContent(22,18);
   h__9->SetBinContent(23,23);
   h__9->SetBinContent(24,38);
   h__9->SetBinContent(25,54);
   h__9->SetBinContent(26,69);
   h__9->SetBinContent(27,108);
   h__9->SetBinContent(28,129);
   h__9->SetBinContent(29,134);
   h__9->SetBinContent(30,96);
   h__9->SetBinContent(31,104);
   h__9->SetBinContent(32,66);
   h__9->SetBinContent(33,71);
   h__9->SetBinContent(34,36);
   h__9->SetBinContent(35,20);
   h__9->SetBinContent(36,11);
   h__9->SetBinContent(38,1);
   h__9->SetEntries(1000);
   h__9->SetStats(0);
   h__9->SetLineWidth(3);
   h__9->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__9->GetXaxis()->CenterTitle(true);
   h__9->GetXaxis()->SetLabelFont(42);
   h__9->GetXaxis()->SetTitleSize(0.04);
   h__9->GetXaxis()->SetTitleOffset(1.1);
   h__9->GetXaxis()->SetTitleFont(42);
   h__9->GetYaxis()->SetTitle("Trials");
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
   pt_LaTex = pt->AddText("-1.135
#pm0.002
");
   pt_LaTex = pt->AddText("0.066
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
