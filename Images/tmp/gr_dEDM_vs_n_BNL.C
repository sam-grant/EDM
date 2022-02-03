void gr_dEDM_vs_n_BNL()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 18 14:24:57 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-1.36875e+07,1.866281e-07,1.231875e+08,7.552141e-06);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[20] = {
   5000000,
   1e+07,
   1.5e+07,
   2e+07,
   2.5e+07,
   3e+07,
   3.5e+07,
   4e+07,
   4.5e+07,
   5e+07,
   5.5e+07,
   6e+07,
   6.5e+07,
   7e+07,
   7.5e+07,
   8e+07,
   8.5e+07,
   9e+07,
   9.5e+07,
   1e+08};
   Double_t Graph0_fy1001[20] = {
   6.324555e-06,
   4.472136e-06,
   3.651484e-06,
   3.162278e-06,
   2.828427e-06,
   2.581989e-06,
   2.390457e-06,
   2.236068e-06,
   2.108185e-06,
   2e-06,
   1.906925e-06,
   1.825742e-06,
   1.754116e-06,
   1.690309e-06,
   1.632993e-06,
   1.581139e-06,
   1.53393e-06,
   1.490712e-06,
   1.450952e-06,
   1.414214e-06};
   Double_t Graph0_fex1001[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[20] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("#sigma#theta_{y} = 10 mrad");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","#sigma#theta_{y} = 10 mrad",100,0,1.095e+08);
   Graph_Graph01001->SetMinimum(9.231794e-07);
   Graph_Graph01001->SetMaximum(6.815589e-06);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("N_{trk}");
   Graph_Graph01001->GetXaxis()->CenterTitle(true);
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("#deltaA_{EDM} [rad]");
   Graph_Graph01001->GetYaxis()->CenterTitle(true);
   Graph_Graph01001->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   
   TF1 *f11002 = new TF1("f1","[0]/sqrt(x)",5000000,1e+08, TF1::EAddToList::kNo);
   f11002->SetFillColor(19);
   f11002->SetFillStyle(0);
   f11002->SetLineColor(2);
   f11002->SetLineWidth(2);
   f11002->SetChisquare(7.371897e-26);
   f11002->SetNDF(19);
   f11002->GetXaxis()->SetLabelFont(42);
   f11002->GetXaxis()->SetTitleOffset(1);
   f11002->GetXaxis()->SetTitleFont(42);
   f11002->GetYaxis()->SetLabelFont(42);
   f11002->GetYaxis()->SetTitleFont(42);
   f11002->SetParameter(0,0.01414214);
   f11002->SetParError(0,7.34316e-11);
   f11002->SetParLimits(0,0,0);
   f11002->SetParent(gre);
   gre->GetListOfFunctions()->Add(f11002);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.59,0.69,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(26);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","Sim","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("f1","p_{0}#upoint#frac{1}{#sqrt{N_{trk}}}","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.3725377,0.9236713,0.6274623,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("#sigma#theta_{y} = 10 mrad");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
