void gr_dEDM_vs_sigma()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Jan 18 14:07:35 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(-0.0027375,-7.714435e-07,0.0246375,1.096791e-05);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1003[20] = {
   0.001,
   0.002,
   0.003,
   0.004,
   0.005,
   0.006,
   0.007,
   0.008,
   0.009,
   0.01,
   0.011,
   0.012,
   0.013,
   0.014,
   0.015,
   0.016,
   0.017,
   0.018,
   0.019,
   0.02};
   Double_t Graph0_fy1003[20] = {
   4.472136e-07,
   8.944273e-07,
   1.341641e-06,
   1.788855e-06,
   2.236068e-06,
   2.683282e-06,
   3.130495e-06,
   3.577709e-06,
   4.024922e-06,
   4.472136e-06,
   4.91935e-06,
   5.366564e-06,
   5.813777e-06,
   6.260991e-06,
   6.708204e-06,
   7.155418e-06,
   7.602632e-06,
   8.049845e-06,
   8.497059e-06,
   8.944272e-06};
   Double_t Graph0_fex1003[20] = {
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
   Double_t Graph0_fey1003[20] = {
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
   TGraphErrors *gre = new TGraphErrors(20,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("N_{trk} = 10 million");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01003 = new TH1F("Graph_Graph01003","N_{trk} = 10 million",100,0,0.0219);
   Graph_Graph01003->SetMinimum(4.024923e-07);
   Graph_Graph01003->SetMaximum(9.793978e-06);
   Graph_Graph01003->SetDirectory(0);
   Graph_Graph01003->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01003->SetLineColor(ci);
   Graph_Graph01003->GetXaxis()->SetTitle("#sigma#theta_{y} [rad]");
   Graph_Graph01003->GetXaxis()->CenterTitle(true);
   Graph_Graph01003->GetXaxis()->SetLabelFont(42);
   Graph_Graph01003->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01003->GetXaxis()->SetTitleFont(42);
   Graph_Graph01003->GetYaxis()->SetTitle("#deltaA_{EDM} [rad]");
   Graph_Graph01003->GetYaxis()->CenterTitle(true);
   Graph_Graph01003->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01003->GetYaxis()->SetLabelFont(42);
   Graph_Graph01003->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01003->GetYaxis()->SetTitleFont(42);
   Graph_Graph01003->GetZaxis()->SetLabelFont(42);
   Graph_Graph01003->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01003);
   
   
   TF1 *f21004 = new TF1("f2","pol1",0.001,0.02, TF1::EAddToList::kNo);
   f21004->SetFillColor(19);
   f21004->SetFillStyle(0);
   f21004->SetLineColor(2);
   f21004->SetLineWidth(2);
   f21004->SetChisquare(5.639535e-25);
   f21004->SetNDF(18);
   f21004->GetXaxis()->SetLabelFont(42);
   f21004->GetXaxis()->SetTitleOffset(1);
   f21004->GetXaxis()->SetTitleFont(42);
   f21004->GetYaxis()->SetLabelFont(42);
   f21004->GetYaxis()->SetTitleFont(42);
   f21004->SetParameter(0,5.145826e-14);
   f21004->SetParError(0,8.222436e-14);
   f21004->SetParLimits(0,0,0);
   f21004->SetParameter(1,0.0004472136);
   f21004->SetParError(1,6.863957e-12);
   f21004->SetParLimits(1,0,0);
   f21004->SetParent(gre);
   gre->GetListOfFunctions()->Add(f21004);
   gre->Draw("ap");
   
   TLegend *leg = new TLegend(0.15,0.69,0.31,0.89,NULL,"brNDC");
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
   entry=leg->AddEntry("f2","p_{0}#plusp_{1}#upoint#sigma#theta_{y}","lpf");
   entry->SetFillColor(19);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.3574623,0.9278671,0.6425377,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("N_{trk} = 10 million");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
