void TotalFit()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 14:19:44 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(3944254,4.346871,1.503112e+07,9.983726);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1001[4] = {
   5792064,
   8156705,
   1.042782e+07,
   1.318330e+07};
   Double_t _fy1001[4] = {
   8.773222,
   6.973087,
   6.443899,
   5.486773};
   Double_t _fex1001[4] = {
   0,
   0,
   0,
   0};
   Double_t _fey1001[4] = {
   0.271028,
   0.1139767,
   0.1691176,
   0.2004264};
   TGraphErrors *gre = new TGraphErrors(4,_fx1001,_fy1001,_fex1001,_fey1001);
   gre->SetName("");
   gre->SetTitle(";Number of tracks;Dilution uncertainty [%]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,5052940,1.392243e+07);
   Graph_Graph1001->SetMinimum(4.910556);
   Graph_Graph1001->SetMaximum(9.42004);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Number of tracks");
   Graph_Graph1001->GetXaxis()->CenterTitle(true);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("Dilution uncertainty [%]");
   Graph_Graph1001->GetYaxis()->CenterTitle(true);
   Graph_Graph1001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *f11002 = new TF1("f1","[0]/sqrt(x)",5792064,1.318330e+07, TF1::EAddToList::kNo);
   f11002->SetFillColor(19);
   f11002->SetFillStyle(0);
   f11002->SetLineColor(2);
   f11002->SetLineWidth(2);
   f11002->SetChisquare(4.063254);
   f11002->SetNDF(3);
   f11002->GetXaxis()->SetLabelFont(42);
   f11002->GetXaxis()->SetTitleOffset(1);
   f11002->GetXaxis()->SetTitleFont(42);
   f11002->GetYaxis()->SetLabelFont(42);
   f11002->GetYaxis()->SetTitleFont(42);
   f11002->SetParameter(0,20257.31);
   f11002->SetParError(0,242.3288);
   f11002->SetParLimits(0,0,0);
   f11002->SetParent(gre);
   gre->GetListOfFunctions()->Add(f11002);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.24,0.79,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(28);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","Sim","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("f1","#frac{a}{#sqrt{N}}","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.55,0.73,0.69,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("#chi^{2}/ndf");
   pt_LaTex = pt->AddText("a");
   pt->Draw();
   
   pt = new TPaveText(0.75,0.75,0.89,0.89,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1.35
");
   pt_LaTex = pt->AddText("(2.03#pm0.02)#times10^{4}");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
