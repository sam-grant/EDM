void verticalOffsetOffsetDataFit_Run-1a_S18()
{
//=========Macro generated from canvas: c/
//=========  (Wed Apr  6 16:18:25 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(757.374,-0.44375,2977.171,-0.006249997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t _fx1005[7] = {
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683,
   2607.205};
   Double_t _fy1005[7] = {
   -0.4474794,
   -0.4138531,
   -0.2093635,
   -0.07458984,
   -0.01955939,
   0.006714371,
   0.01347812};
   Double_t _fex1005[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1005[7] = {
   0.0156335,
   0.01372789,
   0.01326113,
   0.01378129,
   0.01490272,
   0.01673893,
   0.01964262};
   TGraphErrors *gre = new TGraphErrors(7,_fx1005,_fy1005,_fex1005,_fey1005);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","S18",100,979.3537,2755.191);
   Graph_Graph1005->SetMinimum(-0.4);
   Graph_Graph1005->SetMaximum(-0.05);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph1005->GetYaxis()->CenterTitle(true);
   Graph_Graph1005->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *fit1006 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1006->SetFillColor(19);
   fit1006->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1006->SetLineColor(ci);
   fit1006->SetLineWidth(2);
   fit1006->SetChisquare(110.7639);
   fit1006->SetNDF(4);
   fit1006->GetXaxis()->SetLabelFont(42);
   fit1006->GetXaxis()->SetTitleOffset(1);
   fit1006->GetXaxis()->SetTitleFont(42);
   fit1006->GetYaxis()->SetLabelFont(42);
   fit1006->GetYaxis()->SetTitleFont(42);
   fit1006->SetParameter(0,-0.8223826);
   fit1006->SetParError(0,0.02992371);
   fit1006->SetParLimits(0,0,0);
   fit1006->SetParameter(1,0.0003592212);
   fit1006->SetParError(1,1.545551e-05);
   fit1006->SetParLimits(1,0,0);
   fit1006->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1006);
   gre->Draw("ap");
   
   Double_t _fx1007[7] = {
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683,
   2607.205};
   Double_t _fy1007[7] = {
   -0.4474794,
   -0.4138531,
   -0.2093635,
   -0.07458984,
   -0.01955939,
   0.006714371,
   0.01347812};
   Double_t _fex1007[7] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t _fey1007[7] = {
   0.0156335,
   0.01372789,
   0.01326113,
   0.01378129,
   0.01490272,
   0.01673893,
   0.01964262};
   gre = new TGraphErrors(7,_fx1007,_fy1007,_fex1007,_fey1007);
   gre->SetName("");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph10051007 = new TH1F("Graph_Graph_Graph10051007","S18",100,979.3537,2755.191);
   Graph_Graph_Graph10051007->SetMinimum(-0.4);
   Graph_Graph_Graph10051007->SetMaximum(-0.05);
   Graph_Graph_Graph10051007->SetDirectory(0);
   Graph_Graph_Graph10051007->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph10051007->SetLineColor(ci);
   Graph_Graph_Graph10051007->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph_Graph10051007->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph10051007->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051007->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10051007->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph_Graph10051007->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph10051007->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_Graph_Graph10051007->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph10051007->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph_Graph10051007->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051007->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph_Graph10051007->GetYaxis()->SetTitleOffset(1.15);
   Graph_Graph_Graph10051007->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph10051007->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph10051007->GetZaxis()->SetTitleOffset(1);
   Graph_Graph_Graph10051007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph10051007);
   
   
   TF1 *fit1008 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1008->SetFillColor(19);
   fit1008->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1008->SetLineColor(ci);
   fit1008->SetLineWidth(2);
   fit1008->SetChisquare(110.7639);
   fit1008->SetNDF(4);
   fit1008->GetXaxis()->SetLabelFont(42);
   fit1008->GetXaxis()->SetTitleOffset(1);
   fit1008->GetXaxis()->SetTitleFont(42);
   fit1008->GetYaxis()->SetLabelFont(42);
   fit1008->GetYaxis()->SetTitleFont(42);
   fit1008->SetParameter(0,-0.8223826);
   fit1008->SetParError(0,0.02992371);
   fit1008->SetParLimits(0,0,0);
   fit1008->SetParameter(1,0.0003592212);
   fit1008->SetParError(1,1.545551e-05);
   fit1008->SetParLimits(1,0,0);
   fit1008->SetParent(gre);
   gre->GetListOfFunctions()->Add(fit1008);
   gre->Draw("p ");
   
   TF1 *fit1009 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1009->SetFillColor(19);
   fit1009->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1009->SetLineColor(ci);
   fit1009->SetLineWidth(2);
   fit1009->SetChisquare(110.7639);
   fit1009->SetNDF(4);
   fit1009->GetXaxis()->SetLabelFont(42);
   fit1009->GetXaxis()->SetTitleOffset(1);
   fit1009->GetXaxis()->SetTitleFont(42);
   fit1009->GetYaxis()->SetLabelFont(42);
   fit1009->GetYaxis()->SetTitleFont(42);
   fit1009->SetParameter(0,-0.8223826);
   fit1009->SetParError(0,0.02992371);
   fit1009->SetParLimits(0,0,0);
   fit1009->SetParameter(1,0.0003592212);
   fit1009->SetParError(1,1.545551e-05);
   fit1009->SetParLimits(1,0,0);
   fit1009->Draw("SAME");
   
   TF1 *fit1010 = new TF1("fit","[0]+[1]*x",1127.644,2607.574, TF1::EAddToList::kNo);
   fit1010->SetFillColor(19);
   fit1010->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   fit1010->SetLineColor(ci);
   fit1010->SetLineWidth(2);
   fit1010->SetChisquare(110.7639);
   fit1010->SetNDF(4);
   fit1010->GetXaxis()->SetLabelFont(42);
   fit1010->GetXaxis()->SetTitleOffset(1);
   fit1010->GetXaxis()->SetTitleFont(42);
   fit1010->GetYaxis()->SetLabelFont(42);
   fit1010->GetYaxis()->SetTitleFont(42);
   fit1010->SetParameter(0,-0.8223826);
   fit1010->SetParError(0,0.02992371);
   fit1010->SetParLimits(0,0,0);
   fit1010->SetParameter(1,0.0003592212);
   fit1010->SetParError(1,1.545551e-05);
   fit1010->SetParLimits(1,0,0);
   fit1010->Draw("SAME");
   
   TLegend *leg = new TLegend(0.15,0.75,0.5,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","0 mm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("","#minus1 mm","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
