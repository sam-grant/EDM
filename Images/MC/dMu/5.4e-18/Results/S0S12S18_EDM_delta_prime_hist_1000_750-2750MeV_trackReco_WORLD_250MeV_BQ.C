void S0S12S18_EDM_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:01:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__9 = new TH1D("h__9","",61,1.068184,2.290663);
   h__9->SetBinContent(20,1);
   h__9->SetBinContent(21,1);
   h__9->SetBinContent(22,3);
   h__9->SetBinContent(23,7);
   h__9->SetBinContent(24,10);
   h__9->SetBinContent(25,28);
   h__9->SetBinContent(26,38);
   h__9->SetBinContent(27,54);
   h__9->SetBinContent(28,67);
   h__9->SetBinContent(29,91);
   h__9->SetBinContent(30,88);
   h__9->SetBinContent(31,99);
   h__9->SetBinContent(32,115);
   h__9->SetBinContent(33,102);
   h__9->SetBinContent(34,78);
   h__9->SetBinContent(35,64);
   h__9->SetBinContent(36,47);
   h__9->SetBinContent(37,28);
   h__9->SetBinContent(38,35);
   h__9->SetBinContent(39,20);
   h__9->SetBinContent(40,8);
   h__9->SetBinContent(41,8);
   h__9->SetBinContent(42,3);
   h__9->SetBinContent(43,1);
   h__9->SetBinContent(45,1);
   h__9->SetBinContent(46,1);
   h__9->SetBinContent(47,1);
   h__9->SetBinContent(49,1);
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
   pt_LaTex = pt->AddText("1.692
#pm0.002
");
   pt_LaTex = pt->AddText("0.078
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
